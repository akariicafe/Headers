@interface BWFormatRequirements : NSObject

@property (readonly) unsigned int mediaType;

- (id)init;
- (Class)formatClass;
- (BOOL)isEmpty;

@end
