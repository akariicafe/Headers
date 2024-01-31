@class NSString, NSData;

@interface ICSInputData : NSObject <ICSInputByteStream> {
    NSData *_data;
    unsigned long long _cursor;
    char *_rawData;
    unsigned long long _length;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
