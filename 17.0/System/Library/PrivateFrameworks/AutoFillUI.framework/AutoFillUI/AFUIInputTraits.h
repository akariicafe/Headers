@class TITextInputTraits, NSString;

@interface AFUIInputTraits : NSObject <NSCopying>

@property (nonatomic) BOOL displaySecureTextUsingPlainText;
@property (readonly, nonatomic) TITextInputTraits *traits;
@property (readonly, nonatomic) unsigned long long autocorrectionType;
@property (readonly, nonatomic) unsigned long long keyboardType;
@property (readonly, nonatomic) unsigned long long returnKeyType;
@property (readonly, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (readonly, copy, nonatomic) NSString *textContentType;

+ (id)traitsByAdoptingTraits:(id)a0;
+ (id)_traitsWithObject:(id)a0;
+ (id)_traitsWithRTITraits:(id)a0;
+ (id)_traitsWithTITraits:(id)a0;
+ (id)_traitsWithUITraits:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
