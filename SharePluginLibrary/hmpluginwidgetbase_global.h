#ifndef HMPLUGINWIDGETBASE_GLOBAL_H
#define HMPLUGINWIDGETBASE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(HMPLUGINWIDGETBASE_LIBRARY)
#  define HMPLUGINWIDGETBASE_EXPORT Q_DECL_EXPORT
#else
#  define HMPLUGINWIDGETBASE_EXPORT Q_DECL_IMPORT
#endif

#endif // HMPLUGINWIDGETBASE_GLOBAL_H
