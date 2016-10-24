/**
  @file cppwebservlet.cpp
  @author Herik Lima
*/

#include "cppwebservlet.h"

namespace CWF
{
    void CppWebServlet::doGet(CWF::HttpServletRequest &request, CWF::HttpServletResponse &response)
    {
        Q_UNUSED(response)
        QString url(request.getRequestURL());
        if(url.endsWith("/index"))
            request.getRequestDispatcher("/config/cppwebserverpages/index").forward(request, response);
        else if(url.endsWith("/examples"))
            request.getRequestDispatcher("/config/cppwebserverpages/examples").forward(request, response);
        else if(url.endsWith("/documentation"))
            request.getRequestDispatcher("/config/cppwebserverpages/documentation").forward(request, response);
        else if(url.endsWith("/ssl"))
            request.getRequestDispatcher("/config/cppwebserverpages/ssl").forward(request, response);
        else if(url.endsWith("/authors"))
            request.getRequestDispatcher("/config/cppwebserverpages/authors").forward(request, response);
    }
}
