@class _TtC21DocumentUnderstanding20DURequestContentType;

@interface DocumentUnderstanding.DURequestContentType : NSObject <NSCopying>

@property (class, nonatomic, readonly) _TtC21DocumentUnderstanding20DURequestContentType *languageTag;
@property (class, nonatomic, readonly) _TtC21DocumentUnderstanding20DURequestContentType *wikiDataTopic;
@property (class, nonatomic, readonly) _TtC21DocumentUnderstanding20DURequestContentType *date;
@property (class, nonatomic, readonly) _TtC21DocumentUnderstanding20DURequestContentType *address;
@property (class, nonatomic, readonly) _TtC21DocumentUnderstanding20DURequestContentType *link;
@property (class, nonatomic, readonly) _TtC21DocumentUnderstanding20DURequestContentType *phoneNumber;
@property (class, nonatomic, readonly) _TtC21DocumentUnderstanding20DURequestContentType *navigationTitle;
@property (class, nonatomic, readonly) _TtC21DocumentUnderstanding20DURequestContentType *userInterfaceUnderstanding;
@property (class, nonatomic, readonly) _TtC21DocumentUnderstanding20DURequestContentType *category;
@property (class, nonatomic, readonly) _TtC21DocumentUnderstanding20DURequestContentType *poem;
@property (class, nonatomic, readonly) _TtC21DocumentUnderstanding20DURequestContentType *posTags;
@property (class, nonatomic, readonly) _TtC21DocumentUnderstanding20DURequestContentType *foundInEvent;

@property (nonatomic) void /* unknown type, empty encoding */ rawValue;
@property (nonatomic, readonly) BOOL isEmpty;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)initWithRawValue:(long long)a0;
- (void)formIntersection:(id)a0;
- (void)formSymmetricDifference:(id)a0;
- (void)formUnion:(id)a0;
- (id)initWithAbilitiesToUnion:(id)a0;

@end
