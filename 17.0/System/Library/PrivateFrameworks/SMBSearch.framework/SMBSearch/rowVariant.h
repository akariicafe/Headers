@class NSString, NSMutableArray;

@interface rowVariant : NSObject

@property short vType;
@property unsigned char reserved1;
@property unsigned int reserved2;
@property unsigned long long uint64Val;
@property struct timespec { long long tv_sec; long long tv_nsec; } timeSpec;
@property unsigned int uint4Val;
@property int int4Val;
@property (retain) NSString *strValue;
@property (retain) NSMutableArray *vector;
@property unsigned long long vectorCount;

- (id)init;
- (void).cxx_destruct;
- (int)decodeBuffer:(id)a0 BaseOffset:(unsigned int)a1 RowStart:(unsigned int)a2 ValueOffset:(unsigned int)a3 ValueLen:(unsigned int)a4 Use64bit:(BOOL)a5;
- (int)utf16StrLen:(id)a0 Offset:(unsigned long long)a1 Result:(unsigned int *)a2;

@end
