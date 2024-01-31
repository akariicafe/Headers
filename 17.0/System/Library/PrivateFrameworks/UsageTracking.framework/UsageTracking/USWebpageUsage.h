@class NSString, BMSource, NSURL, NSMutableDictionary;
@protocol _CDAsyncLocalContext, _DKKnowledgeSaving;

@interface USWebpageUsage : NSObject {
    NSMutableDictionary *_contextUsageRecord;
}

@property (readonly, copy) NSString *uniqueIdentifier;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *profileIdentifier;
@property (readonly) BOOL usageTrusted;
@property (readonly) id<_CDAsyncLocalContext> context;
@property (readonly) id<_DKKnowledgeSaving> eventStorage;
@property (readonly) BMSource *source;
@property int state;
@property (readonly, copy) NSURL *URL;

+ (id)getProcessIdentifier;

- (id)initWithURL:(id)a0;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 bundleIdentifier:(id)a1;
- (void)changeState:(long long)a0 completionHandler:(id /* block */)a1;
- (id)initWithURL:(id)a0 bundleIdentifier:(id)a1 profileIdentifier:(id)a2;
- (id)initWithURL:(id)a0 bundleIdentifier:(id)a1 auditToken:(struct { unsigned int x0[8]; })a2;
- (id)initWithURL:(id)a0 context:(id)a1 eventStorage:(id)a2 source:(id)a3 bundleIdentifier:(id)a4 profileIdentifier:(id)a5 usageTrusted:(BOOL)a6;

@end
