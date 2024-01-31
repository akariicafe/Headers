@interface CLSTemporalClusterReader : NSObject

+ (BOOL)_isSupportedPortraitEventCategory:(unsigned char)a0;

- (id)eventsBetweenStartDate:(id)a0 endDate:(id)a1 error:(id *)a2;

@end
