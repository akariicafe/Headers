@class CalLocation;

@interface EKSerializableStructuredLocation : EKSerializableObject

@property (copy, nonatomic) CalLocation *calLocation;

+ (id)classesForKey;

- (void).cxx_destruct;
- (id)createStructuredLocation;
- (id)initWithStructuredLocation:(id)a0;

@end
