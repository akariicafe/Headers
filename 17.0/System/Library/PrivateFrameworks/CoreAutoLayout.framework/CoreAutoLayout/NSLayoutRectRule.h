@class NSString, NSLayoutRect;

@interface NSLayoutRectRule : NSObject <NSLayoutRule>

@property (readonly, copy) NSLayoutRect *firstLayoutRect;
@property (readonly, copy) NSLayoutRect *secondLayoutRect;
@property long long relation;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *ruleDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)makeChildRules;

@end
