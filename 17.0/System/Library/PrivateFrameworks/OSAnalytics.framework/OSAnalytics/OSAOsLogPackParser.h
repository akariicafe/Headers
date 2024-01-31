@class NSString;

@interface OSAOsLogPackParser : NSObject

@property (copy) id /* block */ pointerPointsToImmutableMemory;
@property (copy) id /* block */ modulePathForImmutableMemoryPointer;
@property (copy) id /* block */ readCStringFromTarget;
@property (copy) NSString *formatString;
@property BOOL formatStringIsImmutable;
@property (copy) NSString *formatStringOriginatingModulePath;

- (id)parse:(id)a0;
- (void).cxx_destruct;
- (id)compose:(id)a0;
- (id)extractArguments:(id)a0;
- (id)filterOutSensitiveStrings:(id)a0;

@end
