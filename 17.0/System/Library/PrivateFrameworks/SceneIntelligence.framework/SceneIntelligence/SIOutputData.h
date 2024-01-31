@class NSString;

@interface SIOutputData : NSObject <SIData>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)initWithConfig:(id)a0;
+ (BOOL)ensureDirectoryExist:(id)a0;

- (id)initWithConfig:(id)a0;
- (BOOL)copyDataTo:(id)a0;
- (BOOL)saveToDisk:(id)a0 identifier:(id)a1;

@end
