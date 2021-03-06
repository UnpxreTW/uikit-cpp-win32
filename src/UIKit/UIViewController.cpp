#include "UIViewController.h"

UIViewController::UIViewController() : _view(NULL) {
    //this->view.setContainer(this);
    //this->view.setter(&UIViewController::setView);
    //this->view.getter(&UIViewController::getView);
}

UIViewController::~UIViewController() {

}

UIView * UIViewController::getView() {
    if (this->_view == NULL) {
        do {
            this->loadView();
        } while (this->_view == NULL);

        this->viewDidLoad();
    }

    return this->_view;
}

void UIViewController::setView(UIView *view) {
    this->_view = view;
    this->_view->_viewController = this;
}

void UIViewController::loadView() {
    CGRect frame = CGRectMake(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);

    // Create an empty view by default
    this->view = (new UIView)->initWithFrame(frame);
}

void UIViewController::viewDidLoad() {
    
}

void UIViewController::viewWillAppear() {
    
}

void UIViewController::viewDidAppear() {
    
}

void UIViewController::viewWillDisappear() {

}

void UIViewController::viewDidDisappear() {
    
}
