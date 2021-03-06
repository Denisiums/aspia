//
// PROJECT:         Aspia
// FILE:            core_export.h
// LICENSE:         GNU General Public License 3
// PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
//

#ifndef _ASPIA__CORE_EXPORT_H
#define _ASPIA__CORE_EXPORT_H

#if defined(CORE_IMPLEMENTATION)
#define CORE_EXPORT __declspec(dllexport)
#else
#define CORE_EXPORT __declspec(dllimport)
#endif // defined(CORE_IMPLEMENTATION)

#endif // _ASPIA__CORE_EXPORT_H
