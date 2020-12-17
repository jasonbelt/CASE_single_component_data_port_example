#include <source_thread_impl_source_process_component_source_thread_component_api.h>
#include <source_thread_impl_source_process_component_source_thread_component.h>

// This file was auto-generated.  Do not edit

bool api_get_read_port__t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component(
  STACK_FRAME
  S8 *value){
  DeclNewStackFrame(caller, "source_thread_impl_source_process_component_source_thread_component_api.c", "", "api_get_read_port__t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component", 0);

  // Option_486BC1 = Option[t.test_data_port_periodic_domains.source_thread_impl_Operational_Api]
  DeclNewt_test_data_port_periodic_domains_source_thread_impl_Operational_Api(api);
  Option_486BC1_get_(SF (t_test_data_port_periodic_domains_source_thread_impl_Operational_Api) &api, t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component_Bridge_c_operational_api(SF_LAST));

  // Option_FC3847 = Option[S8]
  // Some_240B2F = Some[S8]
  DeclNewOption_FC3847(t_0);
  t_test_data_port_periodic_domains_source_thread_impl_Operational_Api_getread_port_(
    SF
    (Option_FC3847) &t_0,
    &api);

  if(t_0.type == TSome_240B2F){
    *value = t_0.Some_240B2F.value;
    return true;
  } else {
    return false;
  }
}

void api_send_write_port__t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component(
  STACK_FRAME
  S8 value) {
  DeclNewStackFrame(caller, "source_thread_impl_source_process_component_source_thread_component_api.c", "", "api_send_write_port__t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component", 0);

  // Option_D6EAB0 = Option[t.test_data_port_periodic_domains.source_thread_impl_Initialization_Api]
  DeclNewt_test_data_port_periodic_domains_source_thread_impl_Initialization_Api(api);
  Option_D6EAB0_get_(SF (t_test_data_port_periodic_domains_source_thread_impl_Initialization_Api) &api, t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component_Bridge_c_initialization_api(SF_LAST));

  t_test_data_port_periodic_domains_source_thread_impl_Initialization_Api_setwrite_port_(
    SF
    &api,
    value);
}

void api_logInfo__t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "source_thread_impl_source_process_component_source_thread_component_api.c", "", "api_logInfo__t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component", 0);

  // Option_D6EAB0 = Option[t.test_data_port_periodic_domains.source_thread_impl_Initialization_Api]
  DeclNewt_test_data_port_periodic_domains_source_thread_impl_Initialization_Api(api);
  Option_D6EAB0_get_(SF (t_test_data_port_periodic_domains_source_thread_impl_Initialization_Api) &api, t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component_Bridge_c_initialization_api(SF_LAST));

  t_test_data_port_periodic_domains_source_thread_impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "source_thread_impl_source_process_component_source_thread_component_api.c", "", "api_logDebug__t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component", 0);

  // Option_D6EAB0 = Option[t.test_data_port_periodic_domains.source_thread_impl_Initialization_Api]
  DeclNewt_test_data_port_periodic_domains_source_thread_impl_Initialization_Api(api);
  Option_D6EAB0_get_(SF (t_test_data_port_periodic_domains_source_thread_impl_Initialization_Api) &api, t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component_Bridge_c_initialization_api(SF_LAST));

  t_test_data_port_periodic_domains_source_thread_impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "source_thread_impl_source_process_component_source_thread_component_api.c", "", "api_logError__t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component", 0);

  // Option_D6EAB0 = Option[t.test_data_port_periodic_domains.source_thread_impl_Initialization_Api]
  DeclNewt_test_data_port_periodic_domains_source_thread_impl_Initialization_Api(api);
  Option_D6EAB0_get_(SF (t_test_data_port_periodic_domains_source_thread_impl_Initialization_Api) &api, t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component_Bridge_c_initialization_api(SF_LAST));

  t_test_data_port_periodic_domains_source_thread_impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component_initialise(
  STACK_FRAME
  t_test_data_port_periodic_domains_source_thread_impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "source_thread_impl_source_process_component_source_thread_component_api.c", "", "t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component_initialise", 0);

  t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component_initialise_(SF_LAST);
}

Unit t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component_finalise(
  STACK_FRAME
  t_test_data_port_periodic_domains_source_thread_impl_Operational_Api api) {
  DeclNewStackFrame(caller, "source_thread_impl_source_process_component_source_thread_component_api.c", "", "t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component_finalise", 0);

  t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component_finalise_(SF_LAST);
}

Unit t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component_timeTriggered(
  STACK_FRAME
  t_test_data_port_periodic_domains_source_thread_impl_Operational_Api api) {
  DeclNewStackFrame(caller, "source_thread_impl_source_process_component_source_thread_component_api.c", "", "t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component_timeTriggered", 0);

  t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component_timeTriggered_(SF_LAST);
}
