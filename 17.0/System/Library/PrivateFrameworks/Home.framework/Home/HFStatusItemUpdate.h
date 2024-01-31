@class NSString, HFNumberRange;
@protocol HFIconDescriptor;

@interface HFStatusItemUpdate : NSObject {
    void /* unknown type, empty encoding */ _title;
    void /* unknown type, empty encoding */ _secondaryText;
    void /* unknown type, empty encoding */ _iconDescriptor;
    void /* unknown type, empty encoding */ _currentValue;
    void /* unknown type, empty encoding */ _possibleValues;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *secondaryText;
@property (nonatomic, retain) id<HFIconDescriptor> iconDescriptor;
@property (nonatomic, retain) HFNumberRange *currentValue;
@property (nonatomic, retain) HFNumberRange *possibleValues;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (id)initWithTitle:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 secondaryText:(id)a1 iconDescriptor:(id)a2;

@end
