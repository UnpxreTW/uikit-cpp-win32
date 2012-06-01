#ifndef CALAYER_H_
#define CALAYER_H_
#pragma once

#include "../Foundation/Foundation.h"
#include "../CoreGraphics/CoreGraphics.h"

class CALayer;
class UIColor;

class CALayerDelegateProtocol {
  public:
    virtual void drawLayerInContext(CALayer *, CGContextRef) = 0;
};

class CALayer : public NSObject {
  public:
    property (getHidden, setHidden) BOOL isHidden;
    property (getNeedsDisplay, setNeedsDisplay) BOOL needsDisplay;

    CGRect frame;
    CGPoint position;
    //NSArray *sublayers;
    CALayer *superlayer;
    CALayerDelegateProtocol *delegate;
    UIColor *backgroundColor;

    CALayer();
    virtual ~CALayer();

    virtual CALayer * init();
    virtual CALayer * initWithLayer(CALayer *);
    virtual CALayer * initWithFrame(CGRect);

    virtual void addSublayer(CALayer *);
    virtual void display();
    virtual void drawInContext(CGContextRef contextRef);

    virtual BOOL getHidden();
    virtual void setHidden(BOOL);
    virtual BOOL getNeedsDisplay();
    virtual void setNeedsDisplay(BOOL);

  protected:
    DWORD _dwStyle;
    HWND _hWnd;
    BOOL _needsDisplay;
};

// CALAYER_H_
#endif