@class NSSet, DDScannerResult;

@interface CHDataDetectorQueryItem : NSObject

@property (readonly, copy, nonatomic) NSSet *strokeIdentifiers;
@property (readonly, nonatomic) DDScannerResult *dataDetectorResult;
@property (readonly, nonatomic) struct CGPath { } *estimatedBaseline;

- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToDataDetectorQueryItem:(id)a0;

@end
