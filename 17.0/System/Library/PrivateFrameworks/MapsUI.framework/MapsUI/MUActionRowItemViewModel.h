@class UIColor, NSString, MUFeatureDiscoveryAnnotationView, GEOObserverHashTable, UIView;

@interface MUActionRowItemViewModel : NSObject {
    GEOObserverHashTable *_observers;
}

@property (readonly, nonatomic) NSString *titleText;
@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) UIView *accessoryView;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic, getter=isSelected) BOOL selected;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) NSString *accessibilityIdentifier;
@property (readonly, nonatomic) UIColor *preferredTintColor;
@property (readonly, nonatomic) UIColor *preferredBackgroundColor;
@property (retain, nonatomic) MUFeatureDiscoveryAnnotationView *featureDiscoveryView;

- (void)_notifyObservers;
- (id)init;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)analyticsButtonValue;
- (id)analyticsButtonValues;
- (id)buildMenuWithPresentationOptions:(id)a0;

@end
