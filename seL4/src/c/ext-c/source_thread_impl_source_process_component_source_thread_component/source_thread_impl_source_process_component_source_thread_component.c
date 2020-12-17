#include <source_thread_impl_source_process_component_source_thread_component_api.h>
#include <source_thread_impl_source_process_component_source_thread_component.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "source_thread_impl_source_process_component_source_thread_component.c", "", "t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component_initialise_", 0);

  // examples of api setter and logging usage

  S8 t0 = t_Base_Types_Integer_8_empty(SF_LAST);
  api_send_write_port__t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component(SF t0);

  api_logInfo__t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component(SF string("Example logInfo"));

  api_logDebug__t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component(SF string("Example logDebug"));

  api_logError__t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component(SF string("Example logError"));
}

Unit t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "source_thread_impl_source_process_component_source_thread_component.c", "", "t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component_finalise_", 0);
}

S8 counter = 0;

Unit t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "source_thread_impl_source_process_component_source_thread_component.c", "", "t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component_timeTriggered_", 0);

  // examples of api getter usage

  S8 t0;
  if(api_get_read_port__t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component(SF &t0)) {
    DeclNewString(read_port_str);
    String__append(SF (String) &read_port_str, string("Received on read_port: "));
    S8_string_(SF (String) &read_port_str, t0);
    api_logInfo__t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component(SF (String) &read_port_str);
  } else {
    String str = string("Nothing received on 'read_port'\n");
    api_logInfo__t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component(SF str);
  }

  counter++;
  api_send_write_port__t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component(SF counter);
  
  DeclNewString(write_port_str);
  String__append(SF (String) &write_port_str, string("Sent on write_port: "));
  S8_string_(SF (String) &write_port_str, counter);
  api_logInfo__t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component(SF (String) &write_port_str);
}
