#ifndef UIWINDOW_H_
#define UIWINDOW_H_
#pragma once

#include "../Foundation/Foundation.h"

#include "UIView.h"
#include "UIViewController.h"

class UIWindow : public UIView {
  public:
    property ( getRootViewController,
               setRootViewController ) UIViewController *rootViewController;

    UIWindow();

    virtual UIWindow * initWithFrame(CGRect);

    virtual void _makeVisible();
    virtual void makeKeyWindow();
    virtual void makeKeyAndVisible();

    BOOL getIsKeyWindow();
    UIViewController * getRootViewController();
    void setRootViewController(UIViewController *);

  private:
    UIViewController *_rootViewController;
};

// UIWINDOW_H_
#endif