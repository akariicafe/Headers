@class NSDictionary, NSString;

@interface ISDialogButton : NSObject <SSXPCCoding>

@property (retain) NSDictionary *dictionary;
@property int actionType;
@property (retain) id parameter;
@property (readonly) BOOL shouldContinueTouchIDSession;
@property (retain) NSString *title;
@property (copy) NSString *subtarget;
@property long long urlType;
@property long long tag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonWithTitle:(id)a0;

- (id)init;
- (id)initWithXPCEncoding:(id)a0;
- (void).cxx_destruct;
- (id)copyXPCEncoding;
- (int)_actionTypeForString:(id)a0;
- (void)loadFromDictionary:(id)a0;
- (void)_openURLWithRequest:(id)a0;
- (long long)_urlTypeForString:(id)a0;
- (BOOL)isEqual:(id)a0 superficial:(BOOL)a1;
- (void)performDefaultActionForDialog:(id)a0;
- (void)setActionTypeWithString:(id)a0;

@end
