@class NSString;
@protocol SLComposeSheetConfigurationItemObserving;

@interface SLComposeSheetConfigurationItem : NSObject {
    id<SLComposeSheetConfigurationItemObserving> _changeObserver;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) BOOL valuePending;
@property (copy, nonatomic) id /* block */ tapHandler;

- (id)init;
- (void)setChangeObserver:(id)a0;
- (void).cxx_destruct;
- (id)changeObserver;

@end
