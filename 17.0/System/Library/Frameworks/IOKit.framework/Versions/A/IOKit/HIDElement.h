@interface HIDElement : NSObject {
    struct { struct IOHIDDeviceDeviceInterface **deviceInterface; struct __IOHIDDevice *device; struct __IOHIDValue *value; struct IOHIDElementStruct *elementStructPtr; unsigned int index; struct __CFData *data; struct __CFArray *attachedElements; struct __CFArray *childElements; struct __IOHIDElement *parentElement; struct __IOHIDElement *originalElement; struct _IOHIDCalibrationStruct *calibrationPtr; struct __CFDictionary *properties; struct __CFString *rootKey; unsigned char isDirty; } _element;
}

- (unsigned long long)_cfTypeID;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;

@end
