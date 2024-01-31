@class NSString;

@interface KVSkitEmptyAccess : NSObject <KVSkitReadAccess>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prewarm;
- (id)indexLocale;
- (id)matchSpans:(id)a0 error:(id *)a1;

@end
