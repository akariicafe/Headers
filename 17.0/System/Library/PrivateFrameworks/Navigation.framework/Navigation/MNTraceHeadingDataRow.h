@class NSString;

@interface MNTraceHeadingDataRow : NSObject <MNTracePlayerTimelineStreamObjectType>

@property (readonly, nonatomic) double position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double timestamp;
@property (nonatomic) double trueHeading;
@property (nonatomic) double magneticHeading;
@property (nonatomic) double headingAccuracy;


@end
