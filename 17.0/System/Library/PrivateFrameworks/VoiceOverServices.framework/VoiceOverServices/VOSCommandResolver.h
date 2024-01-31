@class NSNumber, VOSScreenreaderMode;

@interface VOSCommandResolver : NSObject <NSCopying> {
    NSNumber *_cachedPressCount;
    NSNumber *_cachedContext;
}

@property (class, readonly, nonatomic) unsigned long long currentHost;

@property (retain, nonatomic) VOSScreenreaderMode *screenreaderMode;
@property (readonly, nonatomic) BOOL isDefaultScreenreaderMode;
@property (readonly, nonatomic) BOOL isHandwritingScreenreaderMode;
@property (readonly, nonatomic) BOOL isBSIScreenreaderMode;
@property (nonatomic) BOOL shouldApplyRTL;
@property (nonatomic) unsigned long long keyboardMode;
@property (readonly, nonatomic) BOOL isDefaultKeyboardMode;
@property (readonly, nonatomic) BOOL isQuickNavKeyboardMode;
@property (nonatomic) unsigned long long host;
@property (readonly, nonatomic) BOOL isIPad;
@property (readonly, nonatomic) BOOL isIPhone;
@property (readonly, nonatomic) BOOL isWatch;
@property (readonly, nonatomic) BOOL isAppleTV;
@property (readonly, nonatomic) BOOL isHomePod;
@property (nonatomic) unsigned long long bsiTypingMode;
@property (readonly, nonatomic) long long pressCount;
@property (copy, nonatomic) id /* block */ fetchPressCountBlock;
@property (readonly, nonatomic) unsigned long long context;
@property (copy, nonatomic) id /* block */ fetchContextBlock;
@property (copy, nonatomic) id /* block */ resolvingEventOccurredBlock;

+ (id)resolverForCurrentHost;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)resolverWithScreenreaderModeVariant:(id)a0;

@end
