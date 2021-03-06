//
// Part of Metta OS. Check http://atta-metta.net for latest version.
//
// Copyright 2007 - 2014, Stanislav Karchebnyy <berkus@atta-metta.net>
//
// Distributed under the Boost Software License, Version 1.0.
// (See file LICENSE_1_0.txt or a copy at http://www.boost.org/LICENSE_1_0.txt)
//
#pragma once

class settings_provider;
namespace uia { namespace routing { namespace internal { class regserver_client; }}}
namespace sss { class host; }

/**
 * Load from settings provider and set user profile for regclient.
 */
void regclient_set_profile(settings_provider* settings,
    uia::routing::internal::regserver_client& regclient,
    sss::host* host);
/**
 * Load from settings provider and connect regclient to a list of regservers.
 */
void regclient_connect_regservers(settings_provider* settings,
    uia::routing::internal::regserver_client& regclient);
