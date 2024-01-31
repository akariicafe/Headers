@class NSString, NSURL, MTLDebugLocation;

@interface _MTLFunctionLogDebugLocation : NSObject <MTLFunctionLogDebugLocation> {
    MTLDebugLocation *_debugLocation;
}

@property (readonly) NSString *functionName;
@property (readonly) NSURL *URL;
@property (readonly) unsigned long long line;
@property (readonly) unsigned long long column;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDebugLocation:(id)a0;

@end
