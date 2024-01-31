@class NSString, NSArray, NSDictionary;

@interface DYContextInfo : NSObject <DYGraphicsAPIInfo, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *debugLabel;
@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly, nonatomic) unsigned long long sharegroupIdentifier;
@property (readonly, retain, nonatomic) NSArray *renderers;
@property (readonly, nonatomic) unsigned int currentRendererIndex;
@property (readonly, nonatomic) int api;
@property (readonly, nonatomic) NSDictionary *defaultSamplePositions;
@property (readonly, nonatomic) NSString *descriptionForBugReport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (int)rendererType;
- (void)determineTextureUnitLimitsForRendererAtIndex:(unsigned int)a0 limits:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } *)a1;
- (void)enumerateBufferTargets:(id /* block */)a0;
- (void)enumerateFramebufferAttachments:(id /* block */)a0;
- (void)enumerateFramebufferColorAttachments:(id /* block */)a0;
- (void)enumerateFramebufferDrawBuffers:(id /* block */)a0;
- (void)enumerateTextureTargets:(id /* block */)a0;
- (id)initWithIdentifier:(unsigned long long)a0 sharegroupIdentifier:(unsigned long long)a1 renderers:(id)a2 currentRendererIndex:(unsigned int)a3 api:(int)a4;
- (BOOL)supportsCapabilitiesOfGraphicsAPI:(id)a0;
- (int)valueForLimit:(id)a0;

@end
