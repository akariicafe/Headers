@class NSSet, NSDictionary;

@interface BMDSLGraphValidator : NSObject

@property (class, readonly) NSSet *genericValidKeyPaths;
@property (class, readonly) NSSet *legacyValidKeyPaths;

@property (readonly, nonatomic) BOOL passthrough;
@property (readonly, copy, nonatomic) NSSet *validKeyPaths;
@property (readonly, copy, nonatomic) NSSet *allowedOperations;
@property (readonly, copy, nonatomic) NSSet *allowedStreamTypes;
@property (readonly, copy, nonatomic) NSDictionary *eventStreamClassMapping;

+ (void)setCurrentProcessValidator:(id)a0;
+ (id)passthroughValidator;
+ (id)currentProcessValidator;

- (id)init;
- (BOOL)isStreamTypeAllowed:(unsigned long long)a0;
- (id)initWithValidKeyPaths:(id)a0 allowedOperations:(id)a1 allowedStreamTypes:(id)a2 eventStreamClassMapping:(id)a3;
- (BOOL)isExecutionAllowedForGraph:(id)a0;
- (Class)eventClassForString:(id)a0;
- (void).cxx_destruct;

@end
