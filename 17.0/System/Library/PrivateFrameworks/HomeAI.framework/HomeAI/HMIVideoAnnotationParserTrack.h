@class NSArray, NSUUID;

@interface HMIVideoAnnotationParserTrack : NSObject

@property (readonly) Class eventClass;
@property (readonly) NSArray *records;
@property (readonly) NSUUID *UUID;

- (void).cxx_destruct;
- (id)initWithEventClass:(Class)a0 records:(id)a1 UUID:(id)a2;

@end
