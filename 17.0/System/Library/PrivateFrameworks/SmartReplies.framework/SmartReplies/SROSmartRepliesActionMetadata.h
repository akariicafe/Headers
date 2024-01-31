@class NSString, NSURL, NSDate, _TtC12SmartReplies28SRSmartRepliesActionMetadata;

@interface SROSmartRepliesActionMetadata : NSObject {
    _TtC12SmartReplies28SRSmartRepliesActionMetadata *_underlyingMetadata;
}

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *attribution;
@property (readonly, copy, nonatomic) NSString *stringRepresentation;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic) BOOL hasRichActionType;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) double locationLatitude;
@property (readonly, nonatomic) double locationLongitude;
@property (readonly, copy, nonatomic) NSString *imageName;
@property (readonly, nonatomic) unsigned long long attributionSource;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 title:(id)a1 attribution:(id)a2 stringRepresentation:(id)a3 date:(id)a4 hasRichActionType:(BOOL)a5 url:(id)a6 locationLatitude:(double)a7 locationLongitude:(double)a8 imageName:(id)a9 attributionSource:(unsigned long long)a10;

@end
