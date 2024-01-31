@class NSUUID, RTStateModelEntryExit, RTStateModelLocation;

@interface RTStateModelOneVisit : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) RTStateModelLocation *location;
@property (readonly, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) RTStateModelEntryExit *EntryExit_s;
@property (nonatomic) long long numOfDataPts;

- (BOOL)isComplete;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithLatitude:(double)a0 longitude:(double)a1 uncertainty:(double)a2 entryTimestamp:(double)a3 exitTimestamp:(double)a4 numOfDataPts:(long long)a5;
- (id)initWithLocation:(id)a0 entryExit:(id)a1 andNumOfDataPts:(long long)a2;

@end
