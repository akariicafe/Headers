@class _MRPlaybackQueueContextProtobuf, NSString, NSArray, NSSet, MRPlayerPath, NSData, NSDictionary;

@interface MRPlaybackQueue : NSObject <NSCopying, NSSecureCoding> {
    _MRPlaybackQueueContextProtobuf *_context;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long location;
@property (nonatomic) BOOL hasLocation;
@property (copy, nonatomic) NSString *requestIdentifier;
@property (copy, nonatomic) NSString *queueIdentifier;
@property (copy, nonatomic) NSArray *contentItems;
@property (copy, nonatomic) NSArray *participants;
@property (copy, nonatomic) NSSet *homeUserIdentifiers;
@property (retain, nonatomic) MRPlayerPath *resolvedPlayerPath;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSArray *contentItemIdentifiers;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (readonly, copy, nonatomic) NSString *minimalReadableDescription;

- (id)initWithContentItem:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithContentItems:(id)a0 location:(unsigned long long)a1;
- (id)description;
- (id)contentItemForIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithContentItems:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)participantForIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)contentItemWithOffset:(unsigned long long)a0;

@end
