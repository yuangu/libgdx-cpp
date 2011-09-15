/*
 *  Copyright 2011 Aevum Software aevum @ aevumlab.com
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *  @author Victor Vicente de Carvalho victor.carvalho@aevumlab.com
 *  @author Ozires Bortolon de Faria ozires@aevumlab.com
 *  @author aevum team
 */

#ifndef GDX_CPP_BACKENDS_ANDROID_FILES_H
#define GDX_CPP_BACKENDS_ANDROID_FILES_H

#include <gdx-cpp/Files.hpp>

namespace gdx_cpp {

namespace files {
class FileHandle;
}

namespace backends {

namespace android {

class AndroidFiles : public gdx_cpp::Files
{
public:
    files::FileHandle& getFileHandle (std::string& path, FileType type);
    
    files::FileHandle& classpath (std::string& path);
    
    files::FileHandle& internal (std::string& path);
    
    files::FileHandle& external (std::string& path);
    
    files::FileHandle& absolute (std::string& path);
    
    std::string& getExternalStoragePath ();
    
    bool isExternalStorageAvailable ();
};

}

}

}

#endif // GDX_CPP_BACKENDS_ANDROID_FILES_H