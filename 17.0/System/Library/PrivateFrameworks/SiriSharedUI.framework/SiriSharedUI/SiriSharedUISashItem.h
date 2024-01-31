@class UIColor, NSString, NSArray, UIImage;
@protocol SiriSharedUISashItemDelegate;

@interface SiriSharedUISashItem : NSObject

@property (weak, nonatomic) id<SiriSharedUISashItemDelegate> delegate;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic, getter=isSiriImage) BOOL siriImage;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) BOOL canPunchout;
@property (copy, nonatomic) NSArray *commands;
@property (nonatomic) BOOL requestsExtraPadding;

+ (void)setLanguageCode:(id)a0;
+ (id)languageCode;

- (id)initWithApplicationBundleIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTitle:(id)a0 image:(id)a1;
- (void)_configureIconForAppProxy:(id)a0;

@end
