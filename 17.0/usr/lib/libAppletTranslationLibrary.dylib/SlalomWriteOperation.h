@interface SlalomWriteOperation : NSObject

@property unsigned short serviceCode;
@property unsigned short blockNumber;
@property unsigned short offsets;

- (id)description;

@end
