#pragma once

#include <string>

#include "common/singleton/const_singleton.h"

namespace Envoy {
namespace Extensions {
namespace Common {
namespace Wasm {

/**
 * Well-known wasm runtime names.
 * NOTE: New wasm runtimes should use the well known name: envoy.wasm.runtime.name.
 */
class WasmRuntimeValues {
public:
  // Null sandbox: modules must be compiled into envoy and registered name is given in the
  // DataSource.inline_string.
  const std::string Null = "envoy.wasm.runtime.null";
};

using WasmRuntimeNames = ConstSingleton<WasmRuntimeValues>;

} // namespace Wasm
} // namespace Common
} // namespace Extensions
} // namespace Envoy
