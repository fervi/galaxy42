// Copyrighted (C) 2015-2017 Antinet.org team, see file LICENCE-by-Antinet.txt

#pragma once

#include "libs0.hpp"

class c_galaxysrv_peers {
	protected:
		c_galaxysrv_peers();
		virtual ~c_galaxysrv_peers();

	public:
		void add_peer(const string & refer); ///< add peer with given reference; @see help_peer_ref() for allowed formats

		void help_peer_ref(ostream & ostr); ///< displays help regarding peer reference formats
};

// -------------------------------------------------------------------


