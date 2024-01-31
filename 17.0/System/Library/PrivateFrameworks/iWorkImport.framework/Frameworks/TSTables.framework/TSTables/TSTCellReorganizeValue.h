@class NSString;

@interface TSTCellReorganizeValue : NSObject

@property (nonatomic) unsigned char valueType;
@property (nonatomic) int rank;
@property (nonatomic) double doubleValue;
@property (retain, nonatomic) NSString *string;

- (void).cxx_destruct;

@end
