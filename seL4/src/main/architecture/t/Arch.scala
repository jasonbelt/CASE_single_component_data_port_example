// #Sireum

package t

import org.sireum._
import art._
import art.PortMode._
import art.DispatchPropertyProtocol._

// This file was auto-generated.  Do not edit

object Arch {
  val top_impl_Instance_source_process_component_source_thread_component : t.test_data_port_periodic_domains.source_thread_impl_source_process_component_source_thread_component_Bridge = {
    val read_port = Port[Base_Types.Integer_8] (id = 0, name = "top_impl_Instance_source_process_component_source_thread_component_read_port", mode = DataIn)
    val write_port = Port[Base_Types.Integer_8] (id = 1, name = "top_impl_Instance_source_process_component_source_thread_component_write_port", mode = DataOut)

    t.test_data_port_periodic_domains.source_thread_impl_source_process_component_source_thread_component_Bridge(
      id = 0,
      name = "top_impl_Instance_source_process_component_source_thread_component",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      read_port = read_port,
      write_port = write_port
    )
  }

  val ad : ArchitectureDescription = {

    ArchitectureDescription(
      components = MSZ (top_impl_Instance_source_process_component_source_thread_component),

      connections = ISZ ()
    )
  }
}