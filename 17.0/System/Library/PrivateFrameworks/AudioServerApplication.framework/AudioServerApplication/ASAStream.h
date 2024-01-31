@class NSString, NSArray, ASAAudioFormat;

@interface ASAStream : ASAObject

@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic, getter=isInput) BOOL input;
@property (readonly, nonatomic, getter=isOutput) BOOL output;
@property (readonly, nonatomic) unsigned int terminalType;
@property (readonly, nonatomic) unsigned int startingChannel;
@property (readonly, nonatomic) unsigned int latency;
@property (copy, nonatomic) ASAAudioFormat *virtualFormat;
@property (copy, nonatomic) ASAAudioFormat *physicalFormat;
@property (readonly, copy, nonatomic) NSArray *availableVirtualFormats;
@property (readonly, copy, nonatomic) NSArray *availablePhysicalFormats;
@property (readonly, copy, nonatomic) NSArray *controlObjectIDs;
@property (readonly, copy, nonatomic) NSArray *controls;
@property (readonly, nonatomic, getter=isVirtualFormatSettable) BOOL virtualFormatSettable;
@property (readonly, nonatomic, getter=isPhysicalFormatSettable) BOOL physicalFormatSettable;
@property (readonly, nonatomic, getter=isTapStream) BOOL tapStream;

- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (unsigned int)latency;
- (void)setName:(id)a0;
- (id)name;
- (unsigned int)terminalType;
- (unsigned int)startingChannel;
- (id)physicalFormat;
- (void)setPhysicalFormat:(id)a0;
- (id)availablePhysicalFormats;
- (id)availableVirtualFormats;
- (id)controlObjectIDs;
- (id)coreAudioClassName;
- (void)setVirtualFormat:(id)a0;
- (id)virtualFormat;

@end
