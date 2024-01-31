@class UIView;

@interface _UICalendarViewCustomViewDecoration : _UICalendarViewDecorationItem {
    id /* block */ _customViewProvider;
    UIView *_fulfilledCustomView;
}

- (void).cxx_destruct;
- (id)_decorationViewForReuseView:(id)a0;
- (id)initWithCustomViewProvider:(id /* block */)a0;

@end
