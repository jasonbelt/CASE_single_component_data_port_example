// #Sireum

package t.test_data_port_periodic_domains

import org.sireum._
import t._

// This file will not be overwritten so is safe to edit
object source_thread_impl_source_process_component_source_thread_component {

  def initialise(api: source_thread_impl_Initialization_Api): Unit = {
    // example api usage

    api.logInfo("Example info logging")
    api.logDebug("Example debug logging")
    api.logError("Example error logging")

    api.setwrite_port(Base_Types.Integer_8_empty())
  }

  def timeTriggered(api: source_thread_impl_Operational_Api): Unit = {
    // example api usage

    val apiUsage_read_port: Option[Base_Types.Integer_8] = api.getread_port()
    api.logInfo(s"Received on read_port: ${apiUsage_read_port}")
  }

  def activate(api: source_thread_impl_Operational_Api): Unit = { }

  def deactivate(api: source_thread_impl_Operational_Api): Unit = { }

  def finalise(api: source_thread_impl_Operational_Api): Unit = { }

  def recover(api: source_thread_impl_Operational_Api): Unit = { }
}
