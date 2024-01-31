@class CLOSTransaction, NSObject;
@protocol OS_dispatch_queue;

@interface CLTripSegmentProcessorManager : NSObject {
    NSObject<OS_dispatch_queue> *fQueue;
    struct CLTripSegmentProcessor { struct CLDistanceCalc { double fM; double fN; double fRefLatRads; double fRefLatDegs; double fCosRefLat; } fDistanceCalculator; struct CLOSTransactionWrapper { CLOSTransaction *inMemoryTransaction_; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } name_; } fOSTransaction; struct CLTripSegmentRecorder { BOOL fRecordingEnabled; } fRecorder; } cltsp;
}

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearMapHelperMemoryAndExitCleanly;
- (id)errorObject:(long long)a0 description:(id)a1;
- (void)processTripSegmentData:(id)a0 outputHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)processTripSegmentData:(id)a0 withOptions:(id)a1 outputHandler:(id /* block */)a2;
- (void)processTripSegmentData:(id)a0 withOptions:(id)a1 outputHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;

@end
