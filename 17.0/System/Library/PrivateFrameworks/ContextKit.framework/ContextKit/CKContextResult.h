@class NSArray, NSString, NSOrderedSet, NSURL, NSSet, NSDateComponents, NSDictionary;

@interface CKContextResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *query;
@property (nonatomic) long long minPrefix;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *topicId;
@property (copy, nonatomic) NSString *portraitId;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *debug;
@property (copy, nonatomic) NSOrderedSet *relatedItems;
@property (copy, nonatomic) NSSet *tags;
@property (nonatomic, getter=isExactMatch) BOOL exactMatch;
@property (copy, nonatomic) NSDateComponents *extractedStartDateComponents;
@property (copy, nonatomic) NSDateComponents *extractedEndDateComponents;
@property (copy, nonatomic) NSDictionary *extractedAddressComponents;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frameInWindow;
@property (nonatomic) struct CGPoint { double x; double y; } absoluteOriginOnScreen;
@property (nonatomic, getter=isOnScreen) BOOL onScreen;
@property (copy, nonatomic) NSString *sceneIdentifier;
@property (copy, nonatomic) NSArray *associatedResults;

+ (id)new;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)toJSONSerializableDictionary;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTitle:(id)a0 query:(id)a1 url:(id)a2 category:(id)a3;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
