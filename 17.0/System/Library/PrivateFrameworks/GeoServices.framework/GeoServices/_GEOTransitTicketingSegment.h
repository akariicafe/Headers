@class NSString, GEOTransitTicketingSegment;

@interface _GEOTransitTicketingSegment : NSObject <GEOTransitTicketingSegmentInfo> {
    GEOTransitTicketingSegment *_segment;
}

@property (readonly, nonatomic) NSString *ticketingUrl;
@property (readonly, nonatomic) NSString *segmentName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSegment:(id)a0;

@end
