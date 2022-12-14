#ifndef MARNAV_IO_SELECTABLE_HPP
#define MARNAV_IO_SELECTABLE_HPP

namespace marnav {
namespace io {
    /// Provides an interface for access (in various publicty degrees) to
    /// the file descriptor.
    ///
    /// @example select.cpp
    class selectable {
    public:
        virtual ~selectable() { }

        /// Returns the filedescriptor.
        virtual int get_fd() const = 0;
    };
}
}

#endif
