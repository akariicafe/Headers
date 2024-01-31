@class UIColor, NSString, NSError, UIListContentTextProperties, UIListContentConfiguration;

@interface PKListTextFieldContentConfiguration : NSObject <UIContentConfiguration> {
    UIListContentConfiguration *_backingConfig;
}

@property (nonatomic) unsigned long long mode;
@property (copy, nonatomic) NSString *text;
@property (readonly, nonatomic) UIListContentTextProperties *textProperties;
@property (copy, nonatomic) NSString *secondaryText;
@property (readonly, nonatomic) UIListContentTextProperties *secondaryTextProperties;
@property (copy, nonatomic) NSString *placeholderText;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) BOOL clearsOnBeginEditing;
@property (nonatomic) BOOL clearsOnInsertion;
@property (nonatomic) BOOL focusTextField;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) UIColor *errorColor;
@property (copy, nonatomic) id /* block */ hasErrorHandler;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } directionalLayoutMargins;
@property (nonatomic) double textToSecondaryTextVerticalPadding;
@property (nonatomic) double textToSecondaryTextHorizontalPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)valueCellConfiguration;
+ (id)cellConfiguration;

- (id)updatedConfigurationForState:(id)a0;
- (id)makeContentView;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isEqualToListTextFieldContentConfiguration:(id)a0;
- (id)initWithBackingConfig:(id)a0;

@end
