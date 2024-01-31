@class NSString;
@protocol NSCopying;

@interface PKPayLaterSwitchRow : NSObject <PKPayLaterCollectionViewRow> {
    id /* block */ _changeHandler;
    NSString *_title;
}

@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic, getter=isOn) BOOL on;
@property (nonatomic) BOOL showSpinner;
@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)cellClass;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTitle:(id)a0 on:(BOOL)a1 changeHandler:(id /* block */)a2;
- (void)_switchValueChanged:(id)a0;
- (void)configureCell:(id)a0;

@end
