@class NSString;
@protocol PRPosterContentStyle;

@interface PRMutablePosterAmbientConfiguration : PRPosterAmbientConfiguration

@property (nonatomic) long long supportedDataLayout;
@property (nonatomic) long long creationBehavior;
@property (nonatomic) long long deletionBehavior;
@property (nonatomic) long long editingBehavior;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL needsAuthentication;
@property (copy, nonatomic) NSString *displayNameSystemSymbolName;
@property (copy, nonatomic) NSString *editingSystemSymbolName;
@property (retain, nonatomic) id<PRPosterContentStyle> editingContentStyle;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
