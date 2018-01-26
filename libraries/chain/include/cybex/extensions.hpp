
#pragma once

namespace graphene { namespace chain {

struct cybex_ext_vesting {
  uint64_t vesting_period;
};
struct cybex_ext_transfer_vesting {
  uint64_t vesting_cliff;
  uint64_t vesting_duration;
};

struct cybex_ext_swap {
  string   msg;
};

struct cybex_ext_xfer_to_name {
  string   name;
  string   asset_sym;
  string   fee_asset_sym;
};
struct cybex_xfer_item {
  string   name;
  float amount;
};
struct cybex_ext_xfer_to_many {
  vector<struct cybex_xfer_item>  list;
};



} }

FC_REFLECT( graphene::chain::cybex_ext_vesting,(vesting_period) )
FC_REFLECT( graphene::chain::cybex_ext_transfer_vesting,(vesting_cliff)(vesting_duration) )
FC_REFLECT( graphene::chain::cybex_ext_swap,(msg) )
FC_REFLECT( graphene::chain::cybex_ext_xfer_to_name,(name)(asset_sym)(fee_asset_sym) )
FC_REFLECT( graphene::chain::cybex_xfer_item,(name)(amount) )
FC_REFLECT( graphene::chain::cybex_ext_xfer_to_many,(list) )
