//
//  MIAFileManager.h
//
//

#import <Foundation/Foundation.h>
#import <ImageIO/ImageIO.h>
#import <UIKit/UIKit.h>

@interface MIAFileManager : NSObject

#pragma mark -
#pragma mark 获取文件信息
/**
 *  获取目录文件某一个信息
 *
 *  @param path 文件路径
 *  @param key  文件信息中的某一个信息
 *
 *  @return 返回获取到的某一个信息
 */
+(id)attributeOfItemAtPath:(NSString *)path forKey:(NSString *)key;

/**
 *  获取目录文件某一个信息
 *
 *  @param path  文件路径
 *  @param key   文件信息中的某一个信息
 *  @param error 出错信息
 *
 *  @return 返回获取到的某一个信息
 */
+(id)attributeOfItemAtPath:(NSString *)path forKey:(NSString *)key error:(NSError **)error;

/**
 *  获取目录文件的信息
 *
 *  @param path 文件路径
 *
 *  @return 以字典对形式返回文件信息
 */
+(NSDictionary *)attributesOfItemAtPath:(NSString *)path;

/**
 *  获取目录文件的信息
 *
 *  @param path  文件路径
 *  @param error 返回的错误信息
 *
 *  @return 以字典对形式返回文件信息
 */
+(NSDictionary *)attributesOfItemAtPath:(NSString *)path error:(NSError **)error;

#pragma mark -
#pragma mark 拷贝文件

/**
 *  拷贝文件
 *
 *  @param path   要拷贝文件的路径
 *  @param toPath 拷贝到目的地的文件路径
 *
 *  @return true成功 false失败
 */
+(BOOL)copyItemAtPath:(NSString *)path toPath:(NSString *)toPath;

/**
 *  拷贝文件
 *
 *  @param path   要拷贝文件的路径
 *  @param toPath 拷贝到目的地的文件路径
 *  @param error  出错信息
 *
 *  @return true成功 false失败
 */
+(BOOL)copyItemAtPath:(NSString *)path toPath:(NSString *)toPath error:(NSError **)error;

/**
 *  拷贝文件
 *
 *  @param path      要拷贝文件的路径
 *  @param toPath    拷贝到目的地的文件路径
 *  @param overwrite 是否覆盖拷贝
 *
 *  @return true成功 false失败
 */
+(BOOL)copyItemAtPath:(NSString *)path toPath:(NSString *)toPath overwrite:(BOOL)overwrite;

/**
 *  拷贝文件
 *
 *  @param path      要拷贝文件的路径
 *  @param toPath    拷贝到目的地的文件路径
 *  @param overwrite 是否覆盖拷贝
 *  @param error     出错信息
 *
 *  @return true成功 false失败
 */
+(BOOL)copyItemAtPath:(NSString *)path toPath:(NSString *)toPath overwrite:(BOOL)overwrite error:(NSError **)error;

#pragma mark -
#pragma mark 创建目录

/**
 *  创建目录
 *
 *  @param path 文件路径
 *
 *  @return true成功 false失败
 */
+(BOOL)createDirectoriesForFileAtPath:(NSString *)path;

/**
 *  创建目录
 *
 *  @param path  文件路径
 *  @param error 错误信息
 *
 *  @return true成功 false失败
 */
+(BOOL)createDirectoriesForFileAtPath:(NSString *)path error:(NSError **)error;

/**
 *  创建目录
 *
 *  @param path 目录路径
 *
 *  @return true成功 false失败
 */
+(BOOL)createDirectoriesForPath:(NSString *)path;

/**
 *  创建目录
 *
 *  @param path  目录路径
 *  @param error 错误信息
 *
 *  @return true成功 false失败
 */
+(BOOL)createDirectoriesForPath:(NSString *)path error:(NSError **)error;

#pragma mark -
#pragma mark 创建文件

/**
 *  创建文件
 *
 *  @param path 文件路径
 *
 *  @return true成功 false失败
 */
+(BOOL)createFileAtPath:(NSString *)path;

/**
 *  创建文件
 *
 *  @param path  文件路径
 *  @param error 出错信息
 *
 *  @return true成功 false失败
 */
+(BOOL)createFileAtPath:(NSString *)path error:(NSError **)error;

/**
 *  创建文件
 *
 *  @param path      文件路径
 *  @param overwrite 是否删除重建
 *
 *  @return true成功 false失败
 */
+(BOOL)createFileAtPath:(NSString *)path overwrite:(BOOL)overwrite;

/**
 *  创建文件
 *
 *  @param path      文件路径
 *  @param overwrite 是否删除重建
 *  @param error     错误信息
 *
 *  @return true成功 false失败
 */
+(BOOL)createFileAtPath:(NSString *)path overwrite:(BOOL)overwrite error:(NSError **)error;

/**
 *  创建文件
 *
 *  @param path    文件路径
 *  @param content 写入文件的内容
 *
 *  @return true成功 false失败
 */
+(BOOL)createFileAtPath:(NSString *)path withContent:(NSObject *)content;

/**
 *  创建文件
 *
 *  @param path    文件路径
 *  @param content 写入文件的内容
 *  @param error   错误信息
 *
 *  @return true成功 false失败
 */
+(BOOL)createFileAtPath:(NSString *)path withContent:(NSObject *)content error:(NSError **)error;

/**
 *  创建文件
 *
 *  @param path      文件路径
 *  @param content   写入文件的内容
 *  @param overwrite 是否删除重建
 *
 *  @return true成功 false失败
 */
+(BOOL)createFileAtPath:(NSString *)path withContent:(NSObject *)content overwrite:(BOOL)overwrite;

/**
 *  创建文件
 *
 *  @param path      文件路径
 *  @param content   写入的文件内容
 *  @param overwrite 是否删除重建
 *  @param error     错误信息
 *
 *  @return true成功 false失败
 */
+(BOOL)createFileAtPath:(NSString *)path withContent:(NSObject *)content overwrite:(BOOL)overwrite error:(NSError **)error;

#pragma mark -
#pragma mark 返回文件创建日期

/**
 *  返回的创建日期
 *
 *  @param path 文件路径
 *
 *  @return 返回的创建日期
 */
+(NSDate *)creationDateOfItemAtPath:(NSString *)path;

/**
 *  返回的创建日期
 *
 *  @param path  文件路径
 *  @param error 错误信息
 *
 *  @return 返回的创建日期
 */
+(NSDate *)creationDateOfItemAtPath:(NSString *)path error:(NSError **)error;

#pragma mark -
#pragma mark 清空文件

+(BOOL)emptyCachesDirectory;
+(BOOL)emptyTemporaryDirectory;

#pragma mark -
#pragma mark 判断路径类型
/**
 *  路径是否存在
 *
 *  @param path 路径
 *
 *  @return 
 */
+(BOOL)existsItemAtPath:(NSString *)path;

/**
 *  是否是目录路径
 *
 *  @param path  路径
 *
 *  @return
 */
+(BOOL)isDirectoryItemAtPath:(NSString *)path;
+(BOOL)isDirectoryItemAtPath:(NSString *)path error:(NSError **)error;

/**
 *  路径或者文件是否为空
 *
 *  @param path 路径
 *
 *  @return 
 */
+(BOOL)isEmptyItemAtPath:(NSString *)path;
+(BOOL)isEmptyItemAtPath:(NSString *)path error:(NSError **)error;

/**
 *  是否是文件路径
 *
 *  @param path 路径
 *
 *  @return 
 */
+(BOOL)isFileItemAtPath:(NSString *)path;
+(BOOL)isFileItemAtPath:(NSString *)path error:(NSError **)error;

#pragma mark -
#pragma mark 文件的可读写执行属性
/**
 *  是否可读，可写，可执行
 *
 *  @param path 文件路径
 *
 *  @return
 */
+(BOOL)isExecutableItemAtPath:(NSString *)path;
+(BOOL)isReadableItemAtPath:(NSString *)path;
+(BOOL)isWritableItemAtPath:(NSString *)path;

#pragma mark -
#pragma mark 获取指定目录下的文件或目录的路径
/**
 *  返回目录中制定扩展名到目录路径(不包括文件的路径)
 *
 *  @param path 路径
 *
 *  @return
 */
+(NSArray *)listDirectoriesInDirectoryAtPath:(NSString *)path;

/**
 *  返回目录中制定扩展名到目录路径(不包括文件的路径)
 *
 *  @param path 路径
 *  @param deep 是否递归获取
 *
 *  @return
 */
+(NSArray *)listDirectoriesInDirectoryAtPath:(NSString *)path deep:(BOOL)deep;

/**
 *  返回目录中制定扩展名到文件路径
 *
 *  @param path 路径
 *
 *  @return 
 */
+(NSArray *)listFilesInDirectoryAtPath:(NSString *)path;

/**
 *  返回目录中制定扩展名到文件路径(不包括目录的路径)
 *
 *  @param path 路径
 *  @param deep 是否递归获取
 *
 *  @return
 */
+(NSArray *)listFilesInDirectoryAtPath:(NSString *)path deep:(BOOL)deep;

/**
 *  返回目录中指定扩展名的文件路径(不包括目录的路径)
 *
 *  @param path      路径
 *  @param extension 文件扩展名
 *
 *  @return 
 */
+(NSArray *)listFilesInDirectoryAtPath:(NSString *)path withExtension:(NSString *)extension;

/**
 *  返回目录中制定扩展名的文件路径
 *
 *  @param path      路径
 *  @param extension 文件扩展名
 *  @param deep      是否递归获取
 *
 *  @return
 */
+(NSArray *)listFilesInDirectoryAtPath:(NSString *)path withExtension:(NSString *)extension deep:(BOOL)deep;

/**
 *  返回目录中制定前缀名的文件路径
 *
 *  @param path   路径
 *  @param prefix 文件前缀名
 *
 *  @return 
 */
+(NSArray *)listFilesInDirectoryAtPath:(NSString *)path withPrefix:(NSString *)prefix;

/**
 *  返回目录中制定前缀名的文件路径
 *
 *  @param path   路径
 *  @param prefix 文件前缀名
 *  @param deep   是否递归获取
 *
 *  @return
 */
+(NSArray *)listFilesInDirectoryAtPath:(NSString *)path withPrefix:(NSString *)prefix deep:(BOOL)deep;

/**
 *  返回目录中指定后缀名的文件路径
 *
 *  @param path   路径
 *  @param suffix 文件后缀名
 *
 *  @return
 */
+(NSArray *)listFilesInDirectoryAtPath:(NSString *)path withSuffix:(NSString *)suffix;

/**
 *  返回目录中指定后缀名的文件路径
 *
 *  @param path   路径
 *  @param suffix 文件后缀名
 *  @param deep   是否递归获取
 *
 *  @return 
 */
+(NSArray *)listFilesInDirectoryAtPath:(NSString *)path withSuffix:(NSString *)suffix deep:(BOOL)deep;

/**
 *  返回路径中的所有文件路径
 *
 *  @param path 路径
 *  @param deep 是否递归获取
 *
 *  @return
 */
+(NSArray *)listItemsInDirectoryAtPath:(NSString *)path deep:(BOOL)deep;

#pragma mark -
#pragma mark 移除文件

/**
 *  移动文件
 *
 *  @param path   文件路径
 *  @param toPath 移动到目的地路径
 *
 *  @return 
 */
+(BOOL)moveItemAtPath:(NSString *)path toPath:(NSString *)toPath;

/**
 *  移动文件
 *
 *  @param path   文件路径
 *  @param toPath 移动到目的地路径
 *  @param error  出错信息
 *
 *  @return
 */
+(BOOL)moveItemAtPath:(NSString *)path toPath:(NSString *)toPath error:(NSError **)error;

/**
 *  移动文件
 *
 *  @param path      文件路径
 *  @param toPath    移动到目的地路径
 *  @param overwrite 是否覆盖
 *
 *  @return
 */
+(BOOL)moveItemAtPath:(NSString *)path toPath:(NSString *)toPath overwrite:(BOOL)overwrite;

/**
 *  移动文件
 *
 *  @param path      文件路径
 *  @param toPath    移动到目的地路径
 *  @param overwrite 是否覆盖
 *  @param error     出错信息
 *
 *  @return
 */
+(BOOL)moveItemAtPath:(NSString *)path toPath:(NSString *)toPath overwrite:(BOOL)overwrite error:(NSError **)error;

#pragma mark -
#pragma mark 路径获取

/**
 *  获取本地应用支持文件目录
 *
 *  @return 返回路径
 */
+(NSString *)pathForApplicationSupportDirectory;

/**
 *  获取本地应用
 *
 *  @param path 路径
 *
 *  @return 返回路径
 */
+(NSString *)pathForApplicationSupportDirectoryWithPath:(NSString *)path;

/**
 *  获取caches路径
 *
 *  @return 返回路径
 */
+(NSString *)pathForCachesDirectory;

/**
 *  获取caches路径
 *
 *  @param path 路径
 *
 *  @return 返回路径
 */
+(NSString *)pathForCachesDirectoryWithPath:(NSString *)path;

/**
 *  获取Documents路径
 *
 *  @return 返回路径
 */
+(NSString *)pathForDocumentsDirectory;

/**
 *  获取Documents下的路径
 *
 *  @param path 路径
 *
 *  @return 返回路径
 */
+(NSString *)pathForDocumentsDirectoryWithPath:(NSString *)path;

/**
 *  获取Library路径
 *
 *  @return 返回路径
 */
+(NSString *)pathForLibraryDirectory;

/**
 *  获取Libary目录下的路径
 *
 *  @param path 路径
 *
 *  @return 返回路径
 */
+(NSString *)pathForLibraryDirectoryWithPath:(NSString *)path;

/**
 *  app的路径
 *
 *  @return 返回路径
 */
+(NSString *)pathForMainBundleDirectory;

/**
 *  app路径
 *
 *  @param path 路径
 *
 *  @return 返回路径
 */
+(NSString *)pathForMainBundleDirectoryWithPath:(NSString *)path;

/**
 *  app中plist文件路径
 *
 *  @param name 文件名
 *
 *  @return 路径
 */
+(NSString *)pathForPlistNamed:(NSString *)name;

/**
 *  获取临时目录
 *
 *  @return 路径名
 */
+(NSString *)pathForTemporaryDirectory;

/**
 *  获取临时目录
 *
 *  @param path 临时目录中的文件名
 *
 *  @return 路径名
 */
+(NSString *)pathForTemporaryDirectoryWithPath:(NSString *)path;

#pragma mark -
#pragma mark 读取文件

+(NSString *)readFileAtPath:(NSString *)path;
/**
 *  读取文件内容到字符串
 *
 *  @param path  文件路径
 *  @param error 出错信息
 *
 *  @return 读取到的内容
 */
+(NSString *)readFileAtPath:(NSString *)path error:(NSError **)error;

+(NSArray *)readFileAtPathAsArray:(NSString *)path;

/**
 *  解档文件
 *
 *  @param path 路径
 *
 *  @return 解当后返回的对象
 */
+(NSObject *)readFileAtPathAsCustomModel:(NSString *)path;

+(NSData *)readFileAtPathAsData:(NSString *)path;
/**
 *  读取文件内容到nsdata
 *
 *  @param path  文件路径
 *  @param error 出错信息
 *
 *  @return 读取到的内容
 */
+(NSData *)readFileAtPathAsData:(NSString *)path error:(NSError **)error;

/**
 *  读取字典内容文件,plist
 *
 *  @param path 文件路径
 *
 *  @return 读取到的内容
 */
+(NSDictionary *)readFileAtPathAsDictionary:(NSString *)path;

+(UIImage *)readFileAtPathAsImage:(NSString *)path;
/**
 *  读取图像文件，nsdata加载图像
 *
 *  @param path  文件路径
 *  @param error 出错信息
 *
 *  @return 读取到的图像文件
 */
+(UIImage *)readFileAtPathAsImage:(NSString *)path error:(NSError **)error;

+(UIImageView *)readFileAtPathAsImageView:(NSString *)path;
/**
 *  读取图像文件，imagenamed加载图像
 *
 *  @param path  文件路径
 *  @param error 出错信息
 *
 *  @return 读取到的图像文件
 */
+(UIImageView *)readFileAtPathAsImageView:(NSString *)path error:(NSError **)error;

+(NSJSONSerialization *)readFileAtPathAsJSON:(NSString *)path;
/**
 *  读取json文件
 *
 *  @param path  文件路径
 *  @param error 出错信息
 *
 *  @return 读取文件内容到json
 */
+(NSJSONSerialization *)readFileAtPathAsJSON:(NSString *)path error:(NSError **)error;

/**
 *  读取文件nsarry内容文件
 *
 *  @param path 文件路径
 *
 *  @return 读取文件内容到nsarray
 */
+(NSMutableArray *)readFileAtPathAsMutableArray:(NSString *)path;

+(NSMutableData *)readFileAtPathAsMutableData:(NSString *)path;

/**
 *  读取文件内容到nsdata
 *
 *  @param path  文件路径
 *  @param error 出错信息
 *
 *  @return 读取文件内容到nsdata
 */
+(NSMutableData *)readFileAtPathAsMutableData:(NSString *)path error:(NSError **)error;

/**
 *  读取字典内容文件
 *
 *  @param path 文件路径
 *
 *  @return 读取文件内容到字典
 */
+(NSMutableDictionary *)readFileAtPathAsMutableDictionary:(NSString *)path;

+(NSString *)readFileAtPathAsString:(NSString *)path;

/**
 *  读取文件内容到字符串
 *
 *  @param path  文件路径
 *  @param error 出错信息
 *
 *  @return 读取到的文件内容
 */
+(NSString *)readFileAtPathAsString:(NSString *)path error:(NSError **)error;


#pragma mark -
#pragma mark 删除文件

+(BOOL)removeFilesInDirectoryAtPath:(NSString *)path;
/**
 *  删除目录下的文件(文件)
 *
 *  @param path  路径
 *  @param error 出错信息
 *
 *  @return 
 */
+(BOOL)removeFilesInDirectoryAtPath:(NSString *)path error:(NSError **)error;

+(BOOL)removeFilesInDirectoryAtPath:(NSString *)path withExtension:(NSString *)extension;
/**
 *  删除目录下指定
 *
 *  @param path      路径
 *  @param extension 扩张名
 *  @param error     出错信息
 *
 *  @return 
 */
+(BOOL)removeFilesInDirectoryAtPath:(NSString *)path withExtension:(NSString *)extension error:(NSError **)error;

+(BOOL)removeFilesInDirectoryAtPath:(NSString *)path withPrefix:(NSString *)prefix;
/**
 *  删除目录下前缀名的文件
 *
 *  @param path   路径
 *  @param prefix 前缀名
 *  @param error  出错信息
 *
 *  @return
 */
+(BOOL)removeFilesInDirectoryAtPath:(NSString *)path withPrefix:(NSString *)prefix error:(NSError **)error;

+(BOOL)removeFilesInDirectoryAtPath:(NSString *)path withSuffix:(NSString *)suffix;
/**
 *  删除目录下指定后缀名的文件
 *
 *  @param path   路径
 *  @param suffix 后缀名
 *  @param error  出错信息
 *
 *  @return
 */
+(BOOL)removeFilesInDirectoryAtPath:(NSString *)path withSuffix:(NSString *)suffix error:(NSError **)error;

+(BOOL)removeItemsInDirectoryAtPath:(NSString *)path;
/**
 *  删除指定目录下的所有文件
 *
 *  @param path  路径
 *  @param error 出错信息
 *
 *  @return 
 */
+(BOOL)removeItemsInDirectoryAtPath:(NSString *)path error:(NSError **)error;

+(BOOL)removeItemAtPath:(NSString *)path;
/**
 *  删除制定路径
 *
 *  @param path  路径
 *  @param error 出错信息
 *
 *  @return 
 */
+(BOOL)removeItemAtPath:(NSString *)path error:(NSError **)error;

+(BOOL)renameItemAtPath:(NSString *)path withName:(NSString *)name;
/**
 *  重命名文件
 *
 *  @param path  文件路径
 *  @param name  要修改的文件名
 *  @param error 出错信息
 *
 *  @return 
 */
+(BOOL)renameItemAtPath:(NSString *)path withName:(NSString *)name error:(NSError **)error;

#pragma mark -
#pragma mark 文件大小操作

/**
 *  字节数转化为字符串“1bytes,2KB,3MB,4GB,5TB”
 *
 *  @param size 字节数
 *
 *  @return 返回格式化后的字符串
 */
+(NSString *)sizeFormatted:(NSNumber *)size;

+(NSString *)sizeFormattedOfDirectoryAtPath:(NSString *)path;
/**
 *  返回字符串“1bytes,2KB,3MB,4GB,5TB”
 *
 *  @param path  路径
 *  @param error 出错处理
 *
 *  @return 返回格式化后的字符串
 */
+(NSString *)sizeFormattedOfDirectoryAtPath:(NSString *)path error:(NSError **)error;

+(NSString *)sizeFormattedOfFileAtPath:(NSString *)path;
/**
 *  返回字符串“1bytes,2KB,3MB,4GB,5TB”
 *
 *  @param path  路径
 *  @param error 出错处理
 *
 *  @return 返回格式化后的字符串
 */
+(NSString *)sizeFormattedOfFileAtPath:(NSString *)path error:(NSError **)error;

+(NSString *)sizeFormattedOfItemAtPath:(NSString *)path;
/**
 *  返回字符串“1bytes,2KB,3MB,4GB,5TB”
 *
 *  @param path  路径
 *  @param error 出错处理
 *
 *  @return 返回格式化后的字符串
 */
+(NSString *)sizeFormattedOfItemAtPath:(NSString *)path error:(NSError **)error;

+(NSNumber *)sizeOfDirectoryAtPath:(NSString *)path;
/**
 *  返回目录的字节数
 *
 *  @param path  路径
 *  @param error 出错处理
 *
 *  @return 返回的字节数
 */
+(NSNumber *)sizeOfDirectoryAtPath:(NSString *)path error:(NSError **)error;

+(NSNumber *)sizeOfFileAtPath:(NSString *)path;

/**
 *  返回文件的字节数
 *
 *  @param path  路径
 *  @param error 出错处理
 *
 *  @return 返回的字节数
 */
+(NSNumber *)sizeOfFileAtPath:(NSString *)path error:(NSError **)error;

+(NSNumber *)sizeOfItemAtPath:(NSString *)path;
/**
 *  返回目录的字节数
 *
 *  @param path  路径
 *  @param error 出错处理
 *
 *  @return 返回的字节数
 */
+(NSNumber *)sizeOfItemAtPath:(NSString *)path error:(NSError **)error;

#pragma mark -
#pragma mark 将文件路径转化成file url

/**
 *  返回file rul
 *
 *  @param path 路径
 *
 *  @return 返回URL
 */
+(NSURL *)urlForItemAtPath:(NSString *)path;

#pragma mark -
#pragma mark 写文件操作

+(BOOL)writeFileAtPath:(NSString *)path content:(NSObject *)content;
/**
 *  写入内容到文件
 *
 *  @param path    路径
 *  @param content 写入的内容
 *  @param error   出错处理
 *
 *  @return 是否写入成功
 */
+(BOOL)writeFileAtPath:(NSString *)path content:(NSObject *)content error:(NSError **)error;

#pragma mark -
#pragma mark 读取图像文件信息

/**
 *  获取图像信息
 *
 *  @param path 路径
 *
 *  @return 返回的图像信息
 */
+(NSDictionary *)metadataOfImageAtPath:(NSString *)path;
/**
 *  获取图片中exif数据信息
 *
 *  @param path 路径
 *
 *  @return 返回的信息
 */
+(NSDictionary *)exifDataOfImageAtPath:(NSString *)path;
/**
 *  获取图片中tiff数据信息
 *
 *  @param path 路径
 *
 *  @return 返回的信息
 */
+(NSDictionary *)tiffDataOfImageAtPath:(NSString *)path;

#pragma mark -
#pragma mark 文件扩展属性,自定义文件属性

/**
 *  获取文件自定义属性
 *
 *  @param path 路径
 *
 *  @return 返回文件的自定义属性
 */
+(NSDictionary *)xattrOfItemAtPath:(NSString *)path;
/**
 *  获取文件某一个自定义属性
 *
 *  @param path 路径
 *  @param key  获取属性的key值
 *
 *  @return 返回某一个自定义文件属性
 */
+(NSString *)xattrOfItemAtPath:(NSString *)path getValueForKey:(NSString *)key;
/**
 *  判断文件是否有指定多自定义属性
 *
 *  @param path 路径
 *  @param key  判断属性的key值
 *
 *  @return 是否有该自定义属性
 */
+(BOOL)xattrOfItemAtPath:(NSString *)path hasValueForKey:(NSString *)key;
/**
 *  删除文件某自定义属性
 *
 *  @param path 路径
 *  @param key  获取属性的key值
 *
 *  @return 是否删除了某自定义属性
 */
+(BOOL)xattrOfItemAtPath:(NSString *)path removeValueForKey:(NSString *)key;
/**
 *  设置文件自定义属性
 *
 *  @param path  路径
 *  @param value 设置属性的value值
 *  @param key   设置属性的key值
 *
 *  @return 是否成功设置了文件某一自定义属性
 */
+(BOOL)xattrOfItemAtPath:(NSString *)path setValue:(NSString *)value forKey:(NSString *)key;

@end

