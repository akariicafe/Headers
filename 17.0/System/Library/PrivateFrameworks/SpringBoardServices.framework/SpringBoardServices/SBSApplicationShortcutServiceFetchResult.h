@class NSArray, NSString;

@interface SBSApplicationShortcutServiceFetchResult : NSObject <BSXPCCoding, NSCopying>

@property (readonly, nonatomic) NSArray *staticApplicationShortcutItems;
@property (readonly, nonatomic) NSArray *dynamicApplicationShortcutItems;
@property (readonly, nonatomic) NSArray *composedApplicationShortcutItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)init;
- (id)initWithStaticApplicationShortcutItems:(id)a0 dynamicApplicationShortcutItems:(id)a1 composedApplicationShortcutItems:(id)a2;
- (id)initWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
