// This file will be regenerated, do not edit

#include <sb_source_thread_impl.h>
#include <source_thread_impl_source_process_component_source_thread_component_adapter.h>
#include <string.h>
#include <camkes.h>

// FIXME: dummy implementation for unconnected outgoing port
Unit t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component_seL4Nix_write_port_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_source_thread_impl.c", "", "t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component_seL4Nix_write_port_Send", 0);
  // FIXME: dummy implementation
}

// FIXME: dummy implementation for unconnected incoming port
B t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component_seL4Nix_read_port_IsEmpty(STACK_FRAME_ONLY) {
  return T;
}

// FIXME: dummy implementation for unconnected incoming port
Unit t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component_seL4Nix_read_port_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_source_thread_impl.c", "", "t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component_seL4Nix_read_port_Receive", 0);

  // FIXME: dummy implementation

  // put None in result
  DeclNewNone_964667(none);
  Type_assign(result, &none, sizeof(union Option_8E9F45));
}

void pre_init(void) {
  DeclNewStackFrame(NULL, "sb_source_thread_impl.c", "", "pre_init", 0);

  printf("Entering pre-init of source_thread_impl_source_process_component_source_thread_component\n");

  // initialise slang-embedded components/ports
  t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of source_thread_impl_source_process_component_source_thread_component\n");
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_source_thread_impl.c", "", "run", 0);

  sb_self_pacer_tick_emit();
  for(;;) {
    sb_self_pacer_tock_wait();
    // call the component's compute entrypoint
    t_test_data_port_periodic_domains_source_thread_impl_source_process_component_source_thread_component_adapter_computeEntryPoint(SF_LAST);
    sb_self_pacer_tick_emit();
  }
  return 0;
}
